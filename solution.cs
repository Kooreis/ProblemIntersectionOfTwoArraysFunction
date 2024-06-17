Here is a simple JavaScript console application that implements a function to return the intersection of two arrays:

```javascript
function intersection(arr1, arr2) {
    return arr1.filter(value => arr2.includes(value));
}

let array1 = [1, 2, 3, 4, 5];
let array2 = [3, 4, 5, 6, 7];

console.log(intersection(array1, array2));
```

This application defines a function `intersection` that takes two arrays as arguments. It uses the `filter` method to create a new array with all elements that pass the test implemented by the provided function. In this case, the test is whether the second array includes the current element. The `includes` method determines whether an array includes a certain value among its entries, returning true or false as appropriate. The application then defines two arrays and logs the intersection of these arrays to the console.