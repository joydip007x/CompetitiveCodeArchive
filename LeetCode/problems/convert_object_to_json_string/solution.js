/**
 * @param {any} object
 * @return {string}
 */
var jsonStringify = function(object) {
    
    switch (typeof object){

        case 'object':
            if(Array.isArray(object)){
                 const ele = object.map((element)=> jsonStringify(element) );
                 return `[${ele.join(',')}]`;
            }
            else if (object){
                const keys=Object.keys(object);
                const keyValPair= keys.map((key)=> 
                `"${key}":${jsonStringify(object[key])}` )
                return `{${keyValPair.join(',')}}`;
            }
            else { return "null";}

        case 'boolean':
        case 'number': return `${object}`;
        case 'string': return `"${object}"`;
    }
};