#include <gtest/gtest.h>
#include "../tested_headers/solution.hpp"
#include <vector>

TEST(FlowersTest, Single) {
	Solution s;
	std::vector<int> test_1 = {1};
	EXPECT_EQ(s.canPlaceFlowers(test_1, 0), true);
	EXPECT_EQ(s.canPlaceFlowers(test_1, 1), false);
	std::vector<int> test_0 = {0};
	EXPECT_EQ(s.canPlaceFlowers(test_0, 0), true);
	EXPECT_EQ(s.canPlaceFlowers(test_0, 1), true);
	EXPECT_EQ(s.canPlaceFlowers(test_0, 2), false);
}

TEST(FlowersTest, SiteExample) {
	Solution s;
	std::vector<int> test = {1,0,0,0,0};
	EXPECT_EQ(s.canPlaceFlowers(test, 0), true);
	EXPECT_EQ(s.canPlaceFlowers(test, 1), true);
	EXPECT_EQ(s.canPlaceFlowers(test, 2), false);
}

TEST(FlowersTest, Preset) {
	Solution s;
	std::vector<int> test_01 = {1,0,1,0,1,0,1,0,1,0,1,0,0,1};
	std::vector<int> test_02 = {1,0,0,0,1,0,1,0,1,0,1,0,0,1};
	std::vector<int> test_03 = {1,0,0,0,0,0,1,0,0,0,0,0,0,1};
	std::vector<int> test_04 = {1,0,0,0,0,0,1,0,0,0,0,0,0,1};
	std::vector<int> test_05 = {1,0,0,0,0,0,0,0,0,0,0,0,0,1};
	std::vector<int> test_06 = {0,0,0,0,0,0,0,0,0,0,0,0,0,0};
	std::vector<int> test_07 = {0,0,0,0,0,0,0,0,0,0,0,0,0,0};
	std::vector<int> test_08 = {0,0,0,0,0,0,0,0,0,0,0,0,0,0};

	EXPECT_EQ(s.canPlaceFlowers(test_01, 1), false);
	EXPECT_EQ(s.canPlaceFlowers(test_02, 1), true);
	EXPECT_EQ(s.canPlaceFlowers(test_03, 4), true);
	EXPECT_EQ(s.canPlaceFlowers(test_04, 5), false);
	EXPECT_EQ(s.canPlaceFlowers(test_05, 5), true);
	EXPECT_EQ(s.canPlaceFlowers(test_06, 7), true);
	EXPECT_EQ(s.canPlaceFlowers(test_07, 8), false);
	EXPECT_EQ(s.canPlaceFlowers(test_08, 6), true);
}
