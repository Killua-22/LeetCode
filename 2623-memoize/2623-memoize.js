/**
 * @param {Function} fn
 * @return {Function}
 */
function memoize(fn) {
    
    var cache = new Map();
    
    return function(...args) {
        
        const strargs = args.toString();
        
        const cachedResult = cache.get(strargs);
        
        if (cachedResult !== undefined) {
         return cachedResult;
        }
        
        const result = fn(...args);
        
        cache.set(strargs, result);
        
        return result;
        
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