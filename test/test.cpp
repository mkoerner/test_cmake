#define CATCH_CONFIG_MAIN
#include <string>
#include "catch.hpp"
#include "hello.hpp"

TEST_CASE("Correct message", "[message]") {
  REQUIRE(get_message("World") == std::string("Hello World!"));
}
