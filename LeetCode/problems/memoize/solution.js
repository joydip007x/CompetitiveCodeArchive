/**
 * @param {Function} fn
 */
function memoize(fn) {
        
   const u=new Map()
   return function(...args) {
    const key = JSON.stringify(args);
    return u.has(key) ?  u.get(key): u.set(key,fn.apply(this, args)).get(key);

  }
  
}


/** 
 * let callCount = 0;
 * const memoizedFn = memoize(function (a, b) {
 *	 callCount += 1;
 *   return a + b;
 * })
 * memoizedFn(2, 3) // 5
 * memoizedFn(2, 3) // 5
 * console.log(callCount) // 1 
 */