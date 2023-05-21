/**
 * @param {any} o1
 * @param {any} o2
 * @return {boolean}
 */
var areDeeplyEqual = function(o1, o2) {

    var objects= [[ o1, o2 ]];

    while(objects.length){

        [o1,o2]=objects.pop();

      //  console.log('o-',o1,o2)
        if(o1===o2)continue;
        if(typeof o1 !=='object' || typeof o2!=='object') return false;
        if (Array.isArray(o1) !== Array.isArray(o2)) return false;

        const keys1=Object.keys(o1);
        const keys2=Object.keys(o2);

        // console.log(keys1,':',keys2);
        // console.log(keys1.length,'L:L',keys2.length);

        if(keys1.length !== keys2.length) return false;

        for(const key of keys1){
           // console.log(key,'::');
            if(!(key in o2)) return false;
            objects.push([  o1[key] , o2[key]  ]);
        }
     //   console.log('H')
      
    }   
    return true;

};