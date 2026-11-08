#include"base16.h"
#include<iostream>
using namespace std;
//base16编码
//return 返回base16编码的字符串

//静态全局变量，作用域本cpp文件

static const string enc_tab{"0123456789ABCDEF"};


static const vector<char> dec_tab
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



std::string Base16Encode(const std::vector<unsigned char> &data)
{
    std::string res;
    for(unsigned char c:data)
    {
        char h=c>>4;
        char l=c&0b00001111;
        res+=enc_tab[h];
        res+=enc_tab[l];
    }
    return res;
}


//base16解码
std::vector<unsigned char>Base16Decode(const std::string &str)
{
    std::vector<unsigned char> res;
    for(int i=0;i<str.size();i+=2)
    {
        char ch=str[i];
        char cl=str[i+1];
        unsigned char h=dec_tab[ch];
        unsigned char l=dec_tab[cl];
        res.push_back(h<<4|l);
    }
    return res;
}