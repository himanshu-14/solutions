process.stdin.resume();
process.stdin.setEncoding('utf8');
/**
 * creates a grid of size n*n
 * @param {Number} n
 */
function creategrid(n){
    console.debug("create grid called");
	let grid=[];
	for(let i=0;i<n;i++){
		let row=[];
		for(let j=0;j<n;j++)
			row.push(0);
		grid.push(row);
	}
	return grid;
}
/**
 * prints a grid of any size line by line assumes a list of lists as argument
 * @param grid 
 */
function printgrid(grid)//prints a 2d array rowwise
{
    console.debug("print grid called");
	for(let i=0;i<grid.length;i++){
		let row=grid[i];
		let rowstring="";
		for(let j=0;j<row.length;j++){
			rowstring+=(grid[i][j]+" "); // type checking not done
		}
		console.log(rowstring);
	}
}
let done=false;
process.stdin.on('data', function (chunk) {
    console.log("data obtained on stream") //input obtained line by line
    if(done)
        return;
    let n=parseInt(chunk);
    let grid=creategrid(n);
    printgrid(grid);
   
	
	if(n%2===0)	{
		console.log("Not an odd number can't make a grid");
		return;
	}
	let x=0,y=0;
	//coordinates of our cursor
	
	let symbol="#";
	for(let i=1;i<=(n+1)/2;i++)	{
		if(i%2)
			symbol="*";
		else
			symbol="#";
		while(x>=0&&x<n&&y>=0&&y<n&&grid[x][y]===0)//move right
			grid[x][y++]=symbol;
		//cursor moves out of the board move it back in and move down
		y--;x++;
		while(x>=0&&x<n&&y>=0&&y<n&&grid[x][y]===0)//move down
			grid[x++][y]=symbol;
		//cursor moves out of the board move it back in and move left
		x--;y--;
		while(x>=0&&x<n&&y>=0&&y<n&&grid[x][y]===0)//move left
			grid[x][y--]=symbol;
		//cursor moves out of the board move it back in and move up
		y++;x--;
		while(x>=0&&x<n&&y>=0&&y<n&&grid[x][y]===0)//move up
			grid[x--][y]=symbol;
		//cursor moves out of the board move it back in and move down
		y++;x++;
    }
    done=true;
    printgrid(grid);
    
	
	
});//end of main

process.stdin.on("end",function(){
    printgrid(grid);
})

//
process.stdin.resume();
process.stdin.setEncoding('utf8');
/**
 * creates a grid of size n*n
 * @param {Number} n
 */
function creategrid(n){
    console.debug("create grid called");
	let grid=[];
	for(let i=0;i<n;i++){
		let row=[];
		for(let j=0;j<n;j++)
			row.push(0);
		grid.push(row);
	}
	return grid;
}
/**
 * prints a grid of any size line by line assumes a list of lists as argument
 * @param grid 
 */
function printgrid(grid)//prints a 2d array rowwise
{
    console.debug("print grid called");
	for(let i=0;i<grid.length;i++){
		let row=grid[i];
		let rowstring="";
		for(let j=0;j<row.length;j++){
			rowstring+=(grid[i][j]+" "); // type checking not done
		}
		console.log(rowstring);
	}
}
let done=false;
process.stdin.on('data', function (chunk) {
    console.log("data obtained on stream") //input obtained line by line
    if(done)
        return;
    let n=parseInt(chunk);
    let grid=creategrid(n);
    printgrid(grid);
   
	
	if(n%2===0)	{
		console.log("Not an odd number can't make a grid");
		return;
	}
	let x=0,y=0;
	//coordinates of our cursor
	
	let symbol="#";
	for(let i=1;i<=(n+1)/2;i++)	{
		if(i%2)
			symbol="*";
		else
			symbol="#";
		while(x>=0&&x<n&&y>=0&&y<n&&grid[x][y]===0)//move right
			grid[x][y++]=symbol;
		//cursor moves out of the board move it back in and move down
		y--;x++;
		while(x>=0&&x<n&&y>=0&&y<n&&grid[x][y]===0)//move down
			grid[x++][y]=symbol;
		//cursor moves out of the board move it back in and move left
		x--;y--;
		while(x>=0&&x<n&&y>=0&&y<n&&grid[x][y]===0)//move left
			grid[x][y--]=symbol;
		//cursor moves out of the board move it back in and move up
		y++;x--;
		while(x>=0&&x<n&&y>=0&&y<n&&grid[x][y]===0)//move up
			grid[x--][y]=symbol;
		//cursor moves out of the board move it back in and move down
		y++;x++;
    }
    done=true;
    printgrid(grid);
    
	
	
});//end of main

process.stdin.on("end",function(){
    printgrid(grid);
})
//
