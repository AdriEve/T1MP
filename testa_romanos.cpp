// Copyright [2023] <Adriele>
#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "romanos.hpp"


TEST_CASE("Numeros romanos - algarismos únicos", "[romanos]") {
    REQUIRE(romanos_para_decimal("I") == 1);
    REQUIRE(romanos_para_decimal("V") == 5);
    REQUIRE(romanos_para_decimal("X") == 10);
    REQUIRE(romanos_para_decimal("L") == 50);
    REQUIRE(romanos_para_decimal("C") == 100);
    REQUIRE(romanos_para_decimal("D") == 500);
    REQUIRE(romanos_para_decimal("M") == 1000);
}

TEST_CASE("Numeros romanos - algarismos repetidos", "[romanos]") {
    REQUIRE(romanos_para_decimal("III") == 3);
    REQUIRE(romanos_para_decimal("XX") == 20);
    REQUIRE(romanos_para_decimal("CCC") == 300);
    REQUIRE(romanos_para_decimal("MM") == 2000);
}

TEST_CASE("Numeros romanos - algarismos crescentes", "[romanos]") {
    REQUIRE(romanos_para_decimal("XI") == 11);
    REQUIRE(romanos_para_decimal("LX") == 60);
    REQUIRE(romanos_para_decimal("CXIII") == 113);
    REQUIRE(romanos_para_decimal("MCL") == 1150);
}

TEST_CASE("Numeros romanos - algarismos decrescentes", "[romanos]") {
    REQUIRE(romanos_para_decimal("IV") == 4);
    REQUIRE(romanos_para_decimal("IX") == 9);
    REQUIRE(romanos_para_decimal("XL") == 40);
    REQUIRE(romanos_para_decimal("XC") == 90);
    REQUIRE(romanos_para_decimal("CM") == 900);
}
