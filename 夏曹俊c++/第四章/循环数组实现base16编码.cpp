#include<iostream>
#include<vector>
#include<string>
using namespace std;
//编码用的映射表
const string base16_enc_tab="0123456789ABCDEF";
int main()
{
    string teststr="测试用于base16的字符串";
    string base16str;
    for(unsigned char c:teststr)
    {
        char h=c>>4;
        char l=c&0b00001111;
        base16str+=base16_enc_tab[h];
        base16str+=base16_enc_tab[l];
    }
    cout<<base16str<<endl;


    //解码
    string ostr;
    const vector<char> base16_dec_tab
    {
        -1,-1,-1,-1,-1,-1,-1,-1,-1,-1,
        -1,-1,-1,-1,-1,-1,-1,-1,-1,-1,
        -1,-1,-1,-1,-1,-1,-1,-1,-1,-1,
        -1,-1,-1,-1,-1,-1,-1,-1,-1,-1,
        -1,-1,-1,-1,-1,-1,-1,-1,   
        0,1,2,3,4,5,6,7,8,9,
        -1,-1,-1,-1,-1,-1,-1,
        10,11,12,13,14,15
    };
    for(int i=0;i<base16str.size();i+=2)
    {
        char ch=base16str[i];
        char cl=base16str[i+1];
        unsigned char h=base16_dec_tab[ch];
        unsigned char l=base16_dec_tab[cl];
        ostr+=(h<<4|l);
    }
    cout<<ostr<<endl;
}