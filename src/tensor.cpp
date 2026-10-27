#include <tinyllm/tensor.h>

std::size_t tinyllm::Tensor::numel() const{
    std::size_t count=1;
    for(auto&x: shape){
        count*=x;
    }
    return count;
}
