#include <benchmark/benchmark.h>
#include <tinyllm/tensor.h>

static void BM_TensorCreate(benchmark::State& state){
    for(auto _: state){
        tinyllm::Tensor t;
        t.shape={2,3};
        t.data={1,2,3,4,5,6};
        benchmark::DoNotOptimize(t.numel());
    }
}
BENCHMARK(BM_TensorCreate);
