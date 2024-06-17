Here is a TypeScript console application that implements a function to return the intersection of two arrays:

```typescript
function intersection(arr1: any[], arr2: any[]): any[] {
    return arr1.filter(value => arr2.includes(value));
}

let array1 = [1, 2, 3, 4, 5];
let array2 = [3, 4, 5, 6, 7];

console.log(intersection(array1, array2));
```

This application defines a function `intersection` that takes two arrays as arguments and returns their intersection. The intersection is computed by filtering the first array to only include elements that are also present in the second array. The result is then logged to the console.