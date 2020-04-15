#include <gtest/gtest.h>
#include <gtest/gtest_pred_impl.h>
#include <iostream>

extern "C" {
#include "../pigtime.h"
}

TEST(Tests, HasPigTime) {
    // at first, the pigtime is not inited, then return false.
    EXPECT_EQ( pg_is_inited(), 0 );
}

TEST(Tests, InitPigtime_1) {
    int i_result;
    // at first, the pigtime is not inited, then return 0
    EXPECT_EQ( i_result = pg_is_inited() , 0 ) << "pg_is_inited return "
                                               << i_result;
    // init succese!
    EXPECT_EQ( i_result = pg_init(), 1 ) << "pg_init return " << i_result;
    // now, the pigtime is inited, then return 0
    EXPECT_EQ( i_result = pg_is_inited() , 1 ) << "pg_is_inited return "
                                               << i_result;
    // can't init it twice!
    EXPECT_EQ( i_result = pg_init(), 1 ) << "can't init pigtime twice " << i_result;
    // clear the pigtime
    EXPECT_EQ( i_result = pg_clear(), 1 ) << "pg_clear return " << i_result;
}

TEST(Tests, InitPigtime_2) {
    // after init the pigtime then it is easy to get the root PgNode by
    // pg_get("/")
    EXPECT_EQ( pg_init(), 1 ) << "pg_init!";
    // the root is a empty Node (because it do not has anything)
    EXPECT_EQ( pg_empty(pg_get("/")), 1 ) << "root folder has nothing";
    // clear the pigtime
    EXPECT_EQ( pg_clear(), 1 ) << "pg_clear!";
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
