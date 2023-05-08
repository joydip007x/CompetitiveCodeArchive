/**
 * @param {number[]} arr
 * @param {Function} fn
 * @return {number[]}
 */
var map = function(arr, fn) {
    return arr.reduce(
        (t,element,index)=>{
          t[index]=fn(element,index);
          return t;
        },[]
    );
};