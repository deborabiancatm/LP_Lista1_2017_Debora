#!/usr/bin/env perl
 
my $n;
my $i;
my $resultado;
my $m;
$resultado=0;
 
$n= <STDIN>;
 
for ($i=1; $i <= $n; $i++) {
	m=(2*$i-1)**( 2*$i-1)/(2*$i)**(2*$i);
	
    if($i==1){
        $resultado=$m;
    }	
    if (($i%2)==0) and ($i>1){
        $resultado=$resultado + $m;
    }
    else if (($i%2)!=0) and ($i>1){
      	$resultado=$resultado * $m;
    }
 
print "o resultado obtido e $resultado\n”;
 
}
