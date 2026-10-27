#include <tinyllm/tensor.h>
#include <iostream>
int main(){
    tinyllm::Tensor t;
    t.shape={2,3};
    t.data={1,3,2,4,5,6};
    for(auto&x: t.shape){
        std::cout<<x<<" ";
    }
    std::cout<<"\n";
    std::cout<<t.numel();
}