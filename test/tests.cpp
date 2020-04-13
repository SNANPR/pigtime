#include <gtest/gtest.h>
#include <gtest/gtest_pred_impl.h>

extern "C" {
#include "../pigtime.h"
}

TEST(Tests, HasPigTime) {
    EXPECT_EQ( pg_inited(), false );
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
