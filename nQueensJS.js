function nqueens(n, r, board) {
	
		for (var i = 0; i < n; i++)
			if (!attacked(n, r, i, board)) {
				board[r][i] = 1;
				if(r==n-1)
				print(n,r,board);
				else
				nqueens(n,r+1,board);				
				board[r][i]=0;
			}
		return;

}
function attacked(n,r,i,board)
{
	for(var x=0;x<n;x++)
	{
		for(var y=0;y<n;y++)
		{
			if(board[x][y]&&(x==r||y==i||x+y==r+i||x-r==y-i)&&(x!=r||y!=i))
				return true;				
		}
	}
	return false;
}var sol=0;
function print(n,r,board)
{
	console.log("SOLUTION"+ ++sol);
	for(var x=0;x<n;x++)
	{
		var row="";
		for(var y=0;y<n;y++)
		{
			row+=(board[x][y]+" ");
			
		}
		console.log(row);
	}
	
		
}
board=[];
console.log(process.argv);
var n=parseInt(process.argv[2]);
for(var x=0;x<n;x++)
{
	var row=[];
	for(var y=0;y<n;y++)
		row.push(0);
	board.push(row);
}
nqueens(n,0,board);
