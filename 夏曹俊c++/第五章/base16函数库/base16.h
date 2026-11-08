#pragma once
#include<string>
#include<vector>

//base16编码
//return 返回base16编码的字符串
std::string Base16Encode(const std::vector<unsigned char> &data);


//base16解码
std::vector<unsigned char> Base16Decode(const std::string &str);