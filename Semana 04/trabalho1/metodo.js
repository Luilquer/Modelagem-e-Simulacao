var digitos = 4;
var seed = 1234;

function nextRand() {
    var n = (seed * seed).toString();

    while (n.length < digitos * 2) {
        n = "0" + n;
    }

    var start = Math.floor(digitos / 2);
    var end = start + digitos;

    seed = parseInt(n.substring(start, end));

    return seed;
}

for (var i = 0; i < 20; i++) {
    console.log(nextRand());
}