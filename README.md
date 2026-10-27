# tinyllm.cpp

expected: A GPT-style language model built and trained from scratch in C++ (and later CUDA): tensor library, autograd, tokenizer, training, and inference.

## Status

**L0 — repo skeleton** (in progress): CMake library + `hello_tensor` executable.

## Build

Requires CMake ≥ 3.20 and a C++20 compiler.

```sh
cmake -S . -B build
cmake --build build
./build/hello_tensor
```

## License

MIT — see [LICENSE](LICENSE).
