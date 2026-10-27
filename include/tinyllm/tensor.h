#pragma once
#include <vector>
#include <cstddef>

namespace tinyllm{
    struct Tensor{
        std::vector<float>data;
        std::vector<size_t>shape;
        std::size_t numel() const;
    };
   
}