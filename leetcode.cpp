//
// Created by 22978 on 2023/5/4.
//
#include <thread>
#include <vector>
#include <iostream>

using namespace std;
class pthread{
public:
    vector<int> num[10];
    int PCB=1;
    int val=1;
    pthread(int a,int b){
        PCB=a;
        val=b;
    }
    void printthread(){
       cout<<PCB<<endl;
       cout<<val<<endl;
    }
private:
    void creatthread(int n){
        thread th(this->printthread());
        for(int i=0;i<n;i++){

            ;
        }
    }
};

int main(){

}
