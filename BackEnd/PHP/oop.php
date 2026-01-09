<?php

class demo1
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

$obj1 = new demo1();
$obj1->a = 20;
$obj1->b = 30;
echo $obj1->Sum();

echo $obj1->Sub();

class Fruit1
{
    public $name;
    public $color;

    function __construct($name, $color)
    {
        $this->name = $name;
        $this->color = $color;
    }
    function get_name()
    {
        return $this->name;
    }
    function get_color()
    {
        return $this->color;
    }
}

$apple = new Fruit1("Apple", "red");
echo $apple->get_name();
echo "<br>";
echo $apple->get_color();

class Fruit
{
    // Properties
    public $name;
    public $color;

    // Methods
    function set_name($name)
    {
        $this->name = $name;
    }
    function get_name()
    {
        return $this->name;
    }
}

$apple = new Fruit();
$banana = new Fruit();
$apple->set_name('Apple');
$banana->set_name('Banana');

echo $apple->get_name();
echo "<br>";
echo $banana->get_name();

class demo
{
    public $a, $b;
    function __construct($a, $b)
    {
        $this->a = $a;
        $this->b = $b;
    }
    function Add()
    {
        // $Sum = $this->$a + $b; 
        return $this->a + $this->b;
    }
    function Sub()
    {
        // $Sum = $this->$a + $b; 
        return $this->a - $this->b;
    }
    function Mul()
    {
        // $Sum = $this->$a + $b; 
        return $this->a * $this->b;
    }
    function Div()
    {
        // $Sum = $this->$a + $b; 
        return $this->a / $this->b;
    }
}


$a = $_GET["input1"];
$b = $_GET["input2"];
$obj1 = new demo($a, $b);
$output = $_GET["output"];
if ($output == "add") {
    echo "add";
    $output = $obj1->Add();
} else if ($output == "sub") {
    echo "sub";
    $output = $obj1->Sub();
} else if ($output == "mul") {
    echo "mul";
    $output = $obj1->Mul();
} else if ($output == "div") {
    echo "div";
    $output = $obj1->Div();
}

?>


<!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
    <style>
        input {

            font-size: 1.5rem;
            /* text-align: center; */
        }

        body {
            color: white;
            background-color: #333;
        }

        .input-type-01 {
            padding: .5rem;
            margin: 10px;
            border-radius: 15px;
            padding-left: 1rem;
            padding-right: 1rem;
        }

        .input-type-02 {
            width: 90%;
            border-radius: 50px;
            height: 50px;
            padding-left: 40px;
        }

        .label-type-01 {
            /* text-align: center; */
            /* margin: auto; */
            display: flex;
            justify-content: center;
            padding: 10px;
        }

        .input-type-01:hover {
            background-color: black;
            color: white;
            cursor: pointer;
        }

        .form-style {
            border: 1px solid #ffffffa1;
            padding: 30px;
            border-radius: 15px;
            box-shadow: 0 0 20px #ffffff1c;
            /* margin: 15px; */
        }
    </style>
</head>
<body>
    <div style="width:500px;padding-top:10vh;margin:auto;font-size:1.5rem;">
        <h2 style="text-align: center;">Simple Calculator</h1>
            <form method="GET" class="form-style">
                <label for="input1" class="label-type-01">1st Variable</label>
                <input type="number" name="input1" class="input-type-02" value="<?php echo $a; ?>">
                <br><br>
                <label for="input2" class="label-type-01">2nd Variable</label>
                <input type="number" name="input2" class="input-type-02" value="<?php echo $b; ?>">
                <br><br>
                <label for="output" class="label-type-01">Operation Output</label>
                <input type="number" name="output" class="input-type-02" value="<?php echo $output; ?>">
                <br><br>
                <div style="display:flex;justify-content:center;">
                    <input type="submit" value="add" name="output" class="input-type-01">&nbsp;&nbsp;
                    <input type="submit" value="sub" name="output" class="input-type-01">&nbsp;&nbsp;
                    <input type="submit" value="mul" name="output" class="input-type-01">&nbsp;&nbsp;
                    <input type="submit" value="div" name="output" class="input-type-01">
                </div>
            </form>
    </div>
</body>

</html>