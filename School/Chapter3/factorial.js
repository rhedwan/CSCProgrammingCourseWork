// let number = 7

function factorial(number) {
    let counter = 1
    let factorial = 1

    // while (counter <= number) {
    //     factorial = factorial * counter
    //     counter++
    // }

    // do {
    //      factorial = factorial * counter
    //      counter++
    // } while (counter<= number);
    for  (let index = 1; index <= number; index++) {
        factorial = factorial * index
    }
    console.log(factorial)
}

factorial(5)
factorial(6)
factorial(3)
factorial(2)