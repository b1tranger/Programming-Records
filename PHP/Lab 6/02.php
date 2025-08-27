<?php

class demo
{
    public $a, $b;
    function __construct($a = 0, $b = 0)
    {
        $this->a = $a;
        $this->b = $b;
    }

    function Sum()
    {
        // $Sum = $this->$a + $b; 
        return $this->a + $this->b;
    }

    function Sub()
    {
        // $Sum = $this->$a + $b; 
        return $this->a - $this->b;
    }

}

$obj1 = new demo();
$obj1->a = 20;
$obj1->b = 30;
echo $obj1->Sum();

echo $obj1->Sub();

?>