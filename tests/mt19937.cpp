#include <doctest/doctest.h>
import<random>;
import lyrahgames.random;

using namespace std;
using namespace lyrahgames;

static_assert(random::generic::random_bit_generator<random::mt19937>);
static_assert(random::generic::identical<random::meta::result<random::mt19937>,
                                         uint32_t>);

static_assert(
    random::generic::random_bit_generator<random::mt19937::default_seeder>);
static_assert(random::generic::identical<
              random::meta::result<random::mt19937::default_seeder>, uint32_t>);

TEST_CASE("random::mt19937 Default Initialization") {
  mt19937 rng{};
  random::mt19937 myrng{};

  const int n = 10'000'000;
  for (int i = 0; i < n; ++i) {
    const auto rnd = rng();
    const auto myrnd = myrng();
    REQUIRE(rnd == myrnd);
  }
}

TEST_CASE("random::mt19937 Random Initialization with Default Seeder") {
  random_device seeder{};

  for (int i = 0; i < 1000; ++i) {
    const auto seed = seeder();
    mt19937 rng{seed};
    random::mt19937 myrng{random::mt19937::default_seeder{seed}};

    for (int j = 0; j < 10'000; ++j) {
      const auto rnd = rng();
      const auto myrnd = myrng();
      REQUIRE(rnd == myrnd);
    }
  }
}
