# MultidimensionalFor

Disclaimer: I wrote this code years ago, and never really used it.

This C++ class allow to iterate through a grid space of arbitrary dimension.

You know, when you want to iterate through a 1D space, you use a for loop:

    for(int i = a; i < b, ++i) { ... }

When you want to iterate through a 2D space, you use two for loop: 

    for(int i = a; i < x, ++i) {
        for(int j = b; j < y, ++j) {
            ...
        }
    }

When you want to iterate through a ND space, you use N for loop. But since you are lazy, you use this `MultidimensionalFor` class.

## License

This code is released under the terms of the MIT License. See the LICENSE.txt file for more details.
