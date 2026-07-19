/**
 * @return {Generator<number>}
 */
var fibGenerator = function*() {
    let current = 0, next = 1;

    while (true) {
        yield current;
        [current, next] = [next, current + next];
    }
};

/**
 * const gen = fibGenerator();
 * gen.next().value; // 0
 * gen.next().value; // 1
 */