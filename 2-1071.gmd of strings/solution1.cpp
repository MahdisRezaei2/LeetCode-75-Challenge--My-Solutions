
#include <iostream>


std::string gcdOfStrings(std::string str1,std::string str2) {
    
    int size1 = str1.size();
    int size2 = str2.size();
    int count;
    std::string common;
    if (size1>size2){
       count= size1;
    }
    else{
        count= size2;
    }
    for(int i=0; i< count; i++){
           if(str1[i]==str2[i]){
            common+=str1[i];
           }
           else if (str1[i]=='\0' || str2[i]=='\0'){
            break;
           }
           else {
            common= "nothing";
           }
    }
    return common;
}

int main()
{
    // std::string str1 = "ABCABC";
    // std::string str2 = "ABC";

     std::string str1 = "LEET";
    std::string str2 = "CODE";
    std::cout << gcdOfStrings(str1, str2);
  
    return 0;
}