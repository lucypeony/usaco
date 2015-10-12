{
USACO 1.1.1 Your ride is here !

输入是两个字符串，分别计算其数值，并mod 47
}
var
	s1,s2:string;
	comlen,grolen,i,x,y:integer;
	comnum,gronum:longint;

begin
	readln(s1);
	readln(s2);
	comlen:=length(s1);
	grolen:=length(s2);

        comnum:=1;
        gronum:=1;
	for i:=1 to comlen do
		comnum:=comnum *(ord(s1[i])-ord('A') + 1);
		
	for i:=1 to grolen do
		gronum:=gronum *(ord(s2[i])- ord('A')+ 1);

        x:=comnum mod 47;
        y:=gronum mod 47;
	if x=y then
		writeln('Go')
	else
	        writeln('Stay');

        writeln('x: ',x,'y: ',y);
end.
