#include <gtest/gtest.h>
#include <tinyllm/tensor.h>

TEST(Tensor, NumelOf2x3) {
    tinyllm::Tensor t;
    t.shape = {2, 3};
    t.data = {1, 2, 3, 4, 5, 6};
    EXPECT_EQ(t.numel(), 6u);
}

// An empty shape is a scalar: one element, which is why numel() starts at 1.
TEST(Tensor, NumelOfScalarIsOne) {
    tinyllm::Tensor t;
    EXPECT_EQ(t.numel(), 1u);
}
