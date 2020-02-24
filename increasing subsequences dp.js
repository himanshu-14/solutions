let input = [5, 2, 3, 1, 4];
let sequenceSize = 3;
let table = [];
let n = input.length;
//creating the empty table
for (let i = 0; i < sequenceSize; i++) {
  let tableRow = [];
  for (let j = 0; j < n; j++) {
    tableRow.push({
      count: 0,
      subSequences: []
    });
  }
  table.push(tableRow);
}
for (let j = 0; j < n; j++) {
  table[0][j].count = 1;
  table[0][j].subSequences.push([input[j]]);
  //push the 1 length subsequence into the corresponding element's list of 1 length subsequences ending at that element's i
}
for (let i = 1; i < sequenceSize; i++) {
  //starting at i since we can only have sequence of length i+1 ending at minimum index of i
  for (let j = i; j < n; j++) {//traversing a row
    let seqCount = 0;
    let subSequences=[];
    for (let k = 0; k < j; k++) {
      if (input[k] > input[j]) {
        seqCount += table[i - 1][k].count;
        table[i-1][k].subSequences.forEach(subSequence=>{
            subSequenceCopy=[...subSequence];
            subSequenceCopy.push(input[j]);
            subSequences.push(subSequenceCopy);
        });
      }      
    } //traversing over indexes lesser than current index
    //we have found the count of increasing subsequences of length i+1 ending at index j at this point
    //saving count and new subsequences at current position
    table[i][j].count+=seqCount;
    table[i][j].subSequences=subSequences;
  }
}
for(let j=sequenceSize-1;j<n;j++){
    let tableEntry=table[sequenceSize-1][j]
    tableEntry.count
    tableEntry.subSequences
    console.log(`Number of decreasing subsequences of length ${sequenceSize} ending at index ${j} is ${tableEntry.count}`);
    tableEntry.subSequences.forEach(subSequence=>{
        console.log(subSequence);
    });
}
