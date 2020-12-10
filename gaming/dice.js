
let diceRoll =() => Math.floor(Math.random()*6)+1

let count=0;
for(let i=0;i<10000; i++){
    let a=[];
    let sum=0;
    for(let j=0; j<8; j++){
        let n = diceRoll()
        a.push(n)
        sum += n
        if(sum==30) {
            console.log(a)
            count++;
            break
        }
    }
}
console.time()
console.log("total number:"+count+" percentage="+count/10000.0*100+"%")
console.timeEnd()
