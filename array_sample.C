////////////////////////////////////////////////////////////////////////////////////////////////
// We are going to create a function that contains the String with the names of the samples 
//to analyze
//-----------------------------------------------------------------------------------------------
#include "TROOT.h"
#include <vector>
#include <string>

void array_samples(vector<string> &f, int option){
    
    if (option==0){
        string a[]={"ggH125_WW2lep","ZqqZll","WqqZll","WpqqWmlv","WplvWmqq",
                    "WlvZqq","llll","lllv","llvv","lvvv"};
        int array_size=sizeof(a)/sizeof(a[0]);
        for (int i=0;i<array_size;i++){
            f.push_back(a[i]);
        }
    }
    
    if (option==1){
        string a[]={"VBFH125_WW2lep",/*"ZqqZll","WqqZll","WpqqWmlv","WplvWmqq",
                    "WlvZqq",*/"llll"/*,"lllv","llvv","lvvv"*/};
        int array_size=sizeof(a)/sizeof(a[0]);
        for (int i=0;i<array_size;i++){
            f.push_back(a[i]);
        }
    }
  
    if (option==2){
        string a[]={"ggH125_WW2lep","VBFH125_WW2lep",/*"ZqqZll","WqqZll","WpqqWmlv",
                    "WplvWmqq",*/"WlvZqq"/*,"llll","lllv","llvv","lvvv"*/};
        int array_size=sizeof(a)/sizeof(a[0]);
        for (int i=0;i<array_size;i++){
            f.push_back(a[i]);
        }
    }
    
}
