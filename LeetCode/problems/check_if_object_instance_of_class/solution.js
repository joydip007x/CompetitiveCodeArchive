/**
 * @param {any} obj
 * @param {any} classFunction
 * @return {boolean}
 */
var checkIfInstanceOf = function(obj, classFunction) {
    if(obj==null || obj===undefined || 
     typeof classFunction !== 'function')return false;

     let inputO= obj;
     if(typeof obj !== "object"){
        inputO = Object(obj);
     }
     return inputO instanceof classFunction;
};

/**
 * checkIfInstanceOf(new Date(), Date); // true
 */