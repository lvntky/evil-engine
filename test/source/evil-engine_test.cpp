#include <catch2/catch_test_macros.hpp>

#include "lib.hpp"

TEST_CASE("Name is evil-engine", "[library]")
{
  auto const lib = library {};
  REQUIRE(lib.name == "evil-engine");
}
