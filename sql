//plsql for reverse of a number

declare
  2  n number;
  3  rev number:=0;
  4  r number;
  5  begin
  6  n:=&n;
  7  while n>0
  8  loop
  9  r:=mod(n,10);
 10  rev:=(rev*10)+r;
 11  n:=floor(n/10);
 12  end loop;
 13  dbms_output.put_line(rev);
 14  end;
 15  /

//PLSQL for PRIME

 declare
  2  n number;
  3  i number:=1;
  4  c number:=0;
  5  begin
  6  n:=&n;
  7  for i in 1..n
  8  loop
  9  if((mod(n,i))=0) then
 10  c:=c+1;
 11  end if;
 12  end loop;
 13  if(c=2)
 14  then
 15  dbms_output.put_line(n||'is prime');
 16  else
 17  dbms_output.put_line(n||'is not prime');
 18  end if;
 19  end;
 20  /

//PLSQL for even or odd

 declare
  2  n number;
  3  begin
  4  n:=&n;
  5  if mod(n,2)=0 then
  6  dbms_output.put_line(n||'is even');
  7  else
  8  dbms_output.put_line(n||'is odd');
  9  end if;
 10  end;
 11  /

//LOOP

 declare
  2  a number;
  3  begin
  4  for a in 1..5 loop
  5  dbms_output.put_line(a);
  6  end loop;
  7  end;
  8  /

//TRIGGERS (DML Operations)

 create or replace trigger my_trigger
  2  after insert or update or delete on employee
  3  for each row
  4  declare
  5  begin
  6  dbms_output.put_line('DML operation triggered on table');
  7  end;
  8  /

//PROCEDURES(posional)

create or replace procedure pr2
  2  (n1 in number,n2 in number,tot out number) is
  3  begin
  4  tot:=n1+n2;
  5  end;
  6  /

Procedure created.

SQL> variable t number
SQL> exec pr2(33,66,:t)

PL/SQL procedure successfully completed.

SQL> print t

         T
----------
        99
