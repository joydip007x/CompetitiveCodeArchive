/**
 * @param {number[]} arr
 * @param {Function} fn
 * @return {number[]}
 */
var filter = function(arr, fn) {
    return arr.reduce( (p,val,ind )=>{
        
        if(fn(val,ind))
             p.push(arr[ind]);
        return p;
    },[])
};