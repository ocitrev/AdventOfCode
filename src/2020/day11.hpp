#pragma once
#include <string_view>

namespace example
{
    static constexpr std::string_view seats{R"(L.LL.LL.LL
LLLLLLL.LL
L.L.L..L..
LLLL.LL.LL
L.LL.LL.LL
L.LLLLL.LL
..L.L.....
LLLLLLLLLL
L.LLLLLL.L
L.LLLLL.LL)"};

static constexpr std::string_view visibleSteats1{R"(.......#.
...#.....
.#.......
.........
..#L....#
....#....
.........
#........
...#.....)"};

static constexpr std::string_view visibleSteats2{R"(.............
.L.L.#.#.#.#.
.............)"};
static constexpr std::string_view visibleSteats3{R"(.##.##.
#.#.#.#
##...##
...L...
##...##
#.#.#.#
.##.##.)"};

}

namespace input
{
    static constexpr std::string_view seats{
        R"(LL.LL.LLLLLL.LLLLLLLLLLLLLLLLLL.LLLLL..LLLLLLL.LLLLLLLLLLLL.LLLL.LLLLL.LL.LLLLLL.LLLL.LLLLL
LLLLL.LLLLLL.LLLLLLLLLLLLL.LLLL.LL.LLLLLLLLLLLLLLLLLLLLLLLL.LLLL.LLLLLLLLLLLLLLLLLLLLLLLLLL
LLLLL.LLLLLLLLLLLLLLL.LLLLLLLLL.LLLLLL.LLLLLLLLLLLLLLLLLLLL.LLLL.LLLLLLLLLLLLLLL.LLLL.LLLLL
LLLLL.LLLLLL.LLLLLLLL.LLLLLLLLLLLLLLLLLLLLLLLL.LLLLL.LLLLLL.LLLLLLLLLLLLLLLLLLLL.LLLLLLLLLL
LLLLL.LLLLLL.LLLLLLLLLLLLL.LLLL.LLLLLLLLLLLLLL.LLLLL.LLLLLL.LLLL.LLLLLLLL.LLLLLLLLLLLLLLLLL
.LL...LL.L.L....LL..LL..L.L.L..L.....L...LL.....LLL..L..L..L.....L.L..LLLL...LL.LL.L.......
LLLLLLLLLLLL.LLLLLLLLLLLLL.LLLLLLLLLLLLLLLLLLLLLLLL..LLLLLLLLLLLLLLLLLLLL.LLLLLL.LLLL.LLLLL
LLLLL.LLLLLLLLLLLLLLL.LLLLLLLLL.LLLLLLLLLLLLLL.LLLLL.LLLLLLLLLLL.LLLLLLLL.LLLLLLLLLLL.LLLLL
LLLLLLLLLLLL.LLLLLLLLLLLLL.LLLL.LLLLLL.LLLLLLLLLLLLLLLLLLLL.LLLL.LLLLLLLLLLLLLLLLLLLL.LLLLL
LLLLL.LLLLLL.LLLLLLLL.LLLL.LLLL.LLLLLLLLLLLLLL.LL.LLLLLLLLL.LLLLLLLLLLLLL.LLLLLLLLLLLLLLLLL
LLLLL.LLLLLL.LLLLLLLL.LLLLLLLLL.LLLLLL.LLLLLLL.LLLLLLLLLLLL.LLLL.LLLLLLLL.LLLLLLLLLLLLLLLLL
LLLLLLLLLLLLLLLLLLLLL.LLLL.LLLLLLLLLLL.LLLLLLL.LLLLL.LLLLLL.LLLL.LLLLLLLLLLLLLLL.LLLL.LLLLL
LL.L......L...LL....L...L.LL.L.....L.LL.L....L...LLL....LL.....LL.L.LLL...LL.L...LLL.L.L...
LLLLLLLLLLLL.LLLLLLLL.L.LL.L.LLLLLLLLL.LLLLLLLLLLLLL.LLLLLL.LLLLLLLLLLLLL.LLLLLLLLLLL.LLLLL
LLLLLLLLLLLL.LLLLLLLLLLLLLLLLLLLLLLLLL.LLLLLLL.LLLLL.LLLLLL.LLLL.LLLLLLLLLLLLLLL.LLLLLLLLLL
LLLLL.LLLLLL.LLLLLLLLLLLLL.LLLL.LLLLLL.LLLLLLLLLL.LL.LLLLLLLLLLL.LLLLLLLLLLLLLLL.LLLL.LLLLL
LLLLL.LLLLLLLLLLLLLLL.LLLL.LLLL.LLLLLL.L.LLLLL.LLLLLLLLLLLL.LLLL.LLLLLLL..LLLLLL.LLLL.LLLLL
LLLLLLLLLLLLLLLLLLLLLLLLLL.LLLLLLLLLLL.LLLLLLL.LLLLLLLLLLLL.LLLL.LLLLLLLLLLLLLLL.L.LL.LLLLL
.LLLL.LLLLLL.LLLLLLLL.LLLLLLLLLLLLLLLL.LLLLLLLLLLLLL.LLLLLLLLLLL.LLLLLLLL.LLLLLL.LLLL.LLLLL
LLLLL.LLLLLL.LLLLLLL.LLLLLLLLLLLLLLLLLLLLLLLLL.LLLLL.LLLLLL.LLLL.LLLLLLLL.LLLLLL.LLLL.LLLLL
...L..L......L..L.L.......LL...L.LL.L...LL...L..LL....L....L.L..L...L...L.L.....LL.....L..L
LLLLL.LLLLLL.LLLLLLLL.LLLLLLLLL.LLLLLL.LLLLLLL.LLLLLLLLLLLL.LLLL.LLLLLLLL.LLLLLLLLLLLLLL.LL
LLLLL.LLLLLLLL.LL.LLLLLLLL.LLLL.LLLLLL.LLLLLLLLLLL.L.LLLLLL.LLLLLLLLLLLLLLLLLLLLLLLLL.LLLLL
LLLLL.LLLLLL.LLLLLLLL.LLLL.LLLL.LLLLLL.LLL.LLL.LLLLL.LLLLLL.LLLL.LLLLLLLLLLLLLLL.LLLL.LLLLL
LLLLLLLLLLLL.LLLLLLLL.LLLL.LLLL.LLLLLLLLLLLLLL.L.LLL.LLLLLL.LLLL.LLLLLLLL.LLLLLL.LLLLLLLLLL
LLLLL.LLLLLL.LLLLLLLL.LLLL.LLLL.LLLLLL.LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL.LLLLLL.LLLLLLLLLL
LLLLL.LLLLLL.LLLLLLLLLLLLL.LLLL.LLLLLL.LLLLLLL.LLLLL.LLLLLL.LLLLLLLLLLLLL.LLLLLL.LLLLLLLLLL
LLLLLLLLLLLL.LLLLLLLL.LLLL.LLLL.LLLLLL.LLLLLLL.LLLLLLLLLLL.LLLLL.LLLLLLLLLLLLLLL.LLLLLLLLLL
.......LL.L.L...LL..L....LL....L.L.L....L......L..LL...LL.LLL..L....L......L.LLL.L.....LLLL
LLLLL.LLLLLLLLLLLLLLL.LLLL.LLLL.LLLLLL.LLLLLLLLLLLLL.LLLLLLLLLLL.LLLLLLLLLLLLLLL.LLLL.LLLLL
LLLLL.LLLLLLLLLLLLLLL.LLLL.LLLL.LLLLLLLLLL.LLLLLLLLL.LLLL.L.LLLL.LLLLLLLL.LLLLLL.L.LLLLLLLL
LLLLL.LLLLLL.LLLLLLLL.LLLL.LLLL.LLLLLL.LLLLLLL.LLLLL.LLLLLL.LLLL.LLLLLLLL.LLLLLL.LLLLLLLLL.
LLLLL.LLLLLLLLLLLLLLL.LLLLLLLLLLLLLLLLLLLLLLLL.LLL.LLLLLLLL.LLLL.LLLLLLLL.LLLLLL.LLL..LLLLL
LLLLL.LLLLLL.LLLLLLLL.LLLL.LLLL.LLLLLLLLLLLLLL.LLLLLLLLLLLL.LLLL.LLLLLLLL.LLLLLLLLLLLLLLLLL
LLLLL.LLLLLLLLLLLLLLL.LLLLLLLLL.LLLLLLLLLLLLLL.LLLLL.LLLLLLLLLLL.LLLLLLLL.LLLLLLLLLLL.LLLLL
LLLLLLLLLLLL.LLLLLLLLLLLLL.LLLL.LLLLLLLLLLLLLLLLLLLL.LLLLLLLLLLL.LLLLLLLLLLLLLLLLLL.LLLLLLL
LLLLL.LLLLLL.LL.LLLLLLLLLL.LLLL.LLLLLL.LLLLLLLLLLLLL.LLLLLL.LLLL.LLLLLLLL.LLLLLL.LLLL.LLLLL
LLLLL.LLLLLL.LLLLLLLL.LLLL.LLLL.LLLLLLLLLLLLLL.LLLLL.LLLLLLLLLLL.LLL.LLLL.LLLLLLLLLLLLLLLLL
.L........L..L.L.LLLLL.......LL.......L..L.L..LL.L......L.......LLL..LLL.LL...L.L...L.LL.L.
LLLLL.LLLLLL.LLLLLLLL.LLLLLLLLL.LLLLLL.LLLLLLL.LLLLLLLLLLLL.LLLLLLLLLLLLL.LLLLLL.LLLL.LLLLL
LLLLLLLLLLLLLLLLLLLLL.LLLL.LLLL.LLLLLL.LLLLLLLLLLLLLLLLLLLL.LLLL.LLLLLLLLLLLLLLL.LLLL.LLLLL
LLLLL..LLLLL.LLLLLLLL.LLLL.LLL..LLLLLL.LLLLLLL.LLLLL.LLLLLL.LLLL.LLLLLLLL.LLLLLL.LLLLLLLLLL
LLLLL.LLLLLL.LLLLLLLL.LLLL.LLLL.LLLLLL.LLLLLLLLLLLLL.LLLLLL.LLLL.LLLLLLLL.LLLLLLLLLLLLLLLLL
LLLLL.LLLLL..LLLLLLLL.LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL.LLLLLLLL.LLLLLL.LLLL.LLLLL
LLLLL.LLLLLLLLLLLLLLL.LLLLLLLLL.LLLLLL.LLLLLLL.LLLLL.LLLLLLLLLLL.LLLLLLLL.LLLLLL.LLLL.LLLLL
LLLLL.LLLLLL.LLLLLLLL.LLLL.LLLLLLLLLLLLLLLLLLL.LLLLL.LLLLLL.LLLL.LLLLLLLL.LLLLLLLLLLL.LLLLL
LLLLL.LLLLLL.LLLLLLLLLLLLL.LLLL.LLLLLL.LLLLLLL.LLLLLLLLLLLL.LLLL.LLLLLLLL.LLLLLLLLLLL.LLLLL
..L..LL.......L.LLLL.L.....L...L.LL...LLLLL.L.....L..L...LL.LL..L..LLLLLL..........LL.....L
LLLLL.LLLLLL.LLLLLLLL.LLLL.LLLLLLLLLLLLLLLLLLL.LLLLL.LLLLLL.LLLL.LLLLLLLLLLLLLLLLLLLL.LLLLL
LLLLL.LLLLLL.LLLLLLLLLLLLL.LLLL.LLLLLLLLLLLLLL.LLLLLLLLLLLL.LLLLLLLLLLLLL.LLLLLLLLLLL.LLLLL
LLLLLLLLLLLLLLLLLLLLLLLLLL.LLLLLLLLLLL.LLLLLLL.LLLLL.LLLLLLLLLLL.LLLLLLLLLLLLLLL.LLLLLLLLLL
LLLLLLLLLLLL.LLLLLLLL.LLLL.LLLL.LLLLLLLLLLLLLL.LLLLLLLLLLLLLLLLLLLLLLLLLL.LLLLLLLLLLLLLLLLL
LLLLL.LLLLLL.LLLLLLLL.LLLL.LLLL.LLLLLL.LLLLLLL.LLLLL.LLLLLL.LLLLLLLLLLLLLLLLLLLL.LLLL.LLLLL
LLLLL..LLLLL.LLLLLLLL.LLLL.LLLLLLLLLLLLLLLLLLLLLLLLL.LLLLLLLLLLLLLLLLLLLL.LLLLLL.LLLL.LLLLL
LLLLLLLLLLLL.LLLLLLLLLLLLL.LLLL.LLLLLL..LLLLLL.LLLLLLLLLLLLLLLLLLLLLLLLLL.LL.LLLLLLLL.LLLLL
LLLLL.LLLLLLLLLLLLLLLLLLLL.LLLLLLLLLLL.LLLLLLL.LLLL..LLLLLL.LLLL.LLLLLLLL.LLLLLLLLLLL.LLLLL
L...LL....L..L..LL.........L.L...LL..LL.L....L...........LL.L.......L.L.L.......L..L..LL..L
LLLLL.LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL.LLLLLLL.LLLLL.LL.LLL.LLLL.LLLLLLLL.LLLLLL.LLLL.LLLLL
LLLLL.LLLLLLLLLLLLLLL.LLLL.LLLL.LLLLLL.L.LLLLLLLLLLL.LL.LLL.LLLLLLLLLLLLL.LLLLLL.LLLL.LLLLL
LLLLLLLLLLLLLLLLLLLLL.LLLL.LLLL.L.LLLL.LLLLLLLLLLLL..L.LLLL.L.LL.LLLLLLLL.LLLLLLLLLLLLLLLL.
LLLLL.LLLLLL.LLLLLLLL.LLLL.LLLL.LLLLLLLLLLLLLL.LLLLL.LLLLLL.LLLL.LLLLLLLL.LLLLLLLLLLLLLLLLL
LLLLL.LLLLLL.LLLLLLLLL.LLL.LLLL.LLLLLL.LLLLLLL.LLLLL.LLLLLL.LLLL.LLLLLLLL.LLLLLL.LLLL.LLLLL
LLLLLLLLLLLL.LLLLLLLL.LLLLLLLLL.LLLLLLLLLLLLLLLLLLLL.LLLLLLLLLLL.LLLLLLLL.LLLLLL.LLLLLLLLLL
LLLLL.LLLLLLLLLLLLLLL.LLLL.LLLLLLLLLLLLLLLLLLL.LLLLL.LLLLLLLLLLL.LLLLLLLLLLLLLLL.LLLLLLLLLL
LLLLLLLLLLLL.LLLLLLLLLLLLLLLLLLLLLLLLL.LLLLLLL.LLLLL.LLLLLL.LLLLLLLLLLLLL.LLLLLLLLLLLLLLLLL
.....L.LLL...LL..LL.....L....LL.......L...LL..L..L...L...L.LL.LL.LL...LL..LLL.L..LLL..LLLL.
LLLLLLLLLLLLLLLLLLLLL.LLLL.LLLL.LLLLLL.LLLLLLLLLLLLLLLLLLLL.LLLLLLLLLLLLL.LLLLLL.LLLL.LLLLL
LLLLLLLLLLLL.LLLLLLLL.LLLLLLLLL.LLLLLLLLLLLL.L.LLLLL.LLLLLL.LLLL.LLLLLLLL.LLLLLL.LLLL.LLLLL
LLLLL.LLLLLLLLLLLLLLL.LLLL.LLLLLLLLL.LLLLLLLLL.LLLLLLLLLLLL.LLLLLLLLLLLLL.LLLLLLLLLLL.LLLLL
LLLLL.LLLLLL.LLLLLLLL.LLLL.LLLL.LLLLLL.LLLLLLLLLLLLL.LLLLLL.LLLLLLLLLLLLL.LLLLLLLLLLLLLLLLL
LLLLLLLLLLLLLLLLLLLLLLLLLL.LLLLLLLLLLL.LLLLLLLLLLLLL.LLLLLLLLLLL.LLLLLLLL.LLLLLLLLLLL.LLLLL
LLLLL.LLLLLLLLLLLLLLL.LLLL..LLL.LLLLLLLLLLLLLL.LLLL..LLLLLLLLLLL.LLLLLLLL.LLLLLL.LLLLLLLLLL
LLLLLLLLLLLL.LLLLLLLL.LLLL.LLLL.LLLLLL.LLLLLLL.LLLLL.LLLLLL.LLLLLLLLLLLLL.LLLLLL.LLLL.LLLLL
LLLLL.LLLLLLLLLLLLLLL.LLLL.LLLLLLLL.LL.LLLLLLLLLLLLL.LL.LLL.LLLLLLLLLLLLL.LLLLLL.LLLL.LLLLL
..L..LL.........L....L.L.L.L...L....L...........LL....L..L...L.LL..L..LL.L..LL..L..L.L..L.L
LLLLL.LLLLLL.LLLLLLLL.LLLL.LLLLLLLLLLLLLL.LLLL.LLLLLLLLLLLL.LLLL.LLLLLLLLLLLLLLL.LLLL.LLLLL
LLLLL.LLLLLL.LLLLLLLL.LLLLLLLLLLLLLLLLLLLLLLLL.LLLLLLLLLLLL.LLLLLLLLLLLLL.LLLLLL.LLLLLLLLLL
LLLLL.LLLLLLLLLLLLLLLLLLLL.LLLL.LLLLLL.LLLLLLL.LLLLLLLLLLLL.LLLL.LLLLLLLL.LLLLLL.LLLLLLLLLL
LLLLL.LLLLLL.LLLLLLLLLLLLL.LLLL.LLLLLLLLLLLLLLLLLLLL.LLLLLL.LLLLLLLLLLLLLLLLLLLL.LLLLLLLLLL
LLLLL.LLLLLLLLLLLLLLL.LLLLLLLLL.LLLLLL.LLLLLLLLLLLLL.LLLLLLLLLLL.LLLLLLLLLLLLLLL.LLLL.LLLLL
....L............L....LL......L.LLL.LLL....LL.....L..L.LL.L........L..L......L.LLL..LL..LL.
LL.LLLLLLLLL.LLLLLLLL.LLLL.LLLL.LLLLLL.LLLLLLL.LLLLL.LLLLLL.LLLLLLLLLLLLLLLLLLLL.LLLLLLLLLL
LLLLL.LLLLLL.LLLLLLLL.L.LLLLLLL.LLLLLLLLLLLLLL.LLLLLLLLLLLLLLLLL.LLLLLLLL..LLLLL.LLLL.LLLLL
LLLLL.LLLLLL.LLLLLLLLLLLLL.LLLL.LLLLLL.LLLLLLL.LLLLLLLLLLLL.LLLLLLLLLLLLLLLLLLLL.LLLLLLLLLL
LLLLLLLLLLLL.LLLLLLLL.LLLL.LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL..LLLLLLLLLLLLLLLLLLL.LLLLL
LLLLL.LLLLLL.LLLLLLLL.LLLLLLLLLLLLL.LL.LLLLLLLLLLLLL.LLLLLL.LLLL.LLLLLLLL.LLLLLL.LLLL.LLLLL
LLLLLLLLLLLL.LLLLLLLL.LLLLLLLLL.LLLLLL.LLLLLLLLLLLLL.LLLLLL.LLLLLLLLLLLLL.LLLLLL.LLLL.LLLLL
LLLLL.L.LLLL.LLLLLLLL.LLLLLLLLL.LLLLLL.LLLLLLLLLLLLL.LLLLLL.LLLL.LLLLLLLL.LLLLLLLLLLL.LLLLL
LLLLL.LLLLLL.LLLLLLLL.LLLL.LLLL.LLLLLLLLLLLLLL.LLLLL.LLLLLL.LLLL.LLLLLLLL.LLLLLLLLLLLLLLLLL
LLLLL.LLLLLLLLLLLLLLL.LLLL.LLLL.LLLLLL.LLLLLLLLLLLLL.LLLLLLLLLLL.LLLLLLLL.LLLLLL.LLLLLLLLLL
.L......LLL...L.L.LL.L.....LL.L..L.L.LLLLL....LL..L...L..L.....L.L...L...L.L.LL.LL.L.......
LLLLLLLLLLLL.LLLLLLLL.LLLLLLLLL.LLLLLL.LLLLLLL.LLLLL.LLLLLL.LLLL.LLLLLLLLLLLLLLL.LLLL.LLLLL
LLLLL.LLLLLL.LLLLLLLL.LLLL.LLLL.LLLLLL.LLLLLLL.LLLLL.LLLLLLLLLLL.LLLLLLLLLLLLLLLLLLLL.LLLLL
LLLLL.LLLLLL.LLLLLLLL.LLLLLLLLL.LLLLLL.LLLLLLL.LLLLLLLLLLLL.LLLL.LLLLLLLL.LLLLLLLLLLL.LLLLL
LLLLLLLLLLLLLLLLLLLLL.LLLLLLLLL.LLLLLL.LLLLLLLLLLLLL.LLLLLLLLLLL.LLLLLLLLLLLLLLL.LLLLLLLLLL
LLLLL.LLLLLLLLLLLLLL..LLLLLLLLL.LLLLLL.LLLLLLL.LLLLL.LLLLL..LLLL.LLLLLLLLLLLLLLLLLLLLLLLLLL
LLLLLLLLLLLLLLLLLLLLL.LLLL.LLLLLLLLLLLLLLLLLLL.LLLLL.LLLLLL.LLLL.LLLLLLLL.LLLLLL.LLLL.LLLLL)"};
}
