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
    <?php
    class demo
    {
        public $a, $b;
        function __construct($a)
        {
            // $this->a = $a;
            // $this->b = $b;
            $n = $a;
            $x = 1;
            $k = 2;
            // $str = " ";
            for ($i = 1; $i <= $n; $i++) {
                if ($i % 2 != 0) {
                    echo " " . $x;
                    // $str = $str + $x;
                    $x = $x + $k;
                } else if ($i % 2 == 0) {
                    echo " " . $i * $i;
                    // $str = $str + $i * $i;
                }
            }
            // $output = $str;
        }

    }


    $a = $_GET["input1"];
    // $b = $_GET["input2"];
    $obj1 = new demo($a);
    $output = $_GET["output"];
    // $output = $str;
    
    // $n = $a;
    // $x = 1;
    // $k = 2;
    
    // for ($i = 1; $i <= $n; $i++) {
    //     if ($i % 2 != 0) {
    //         echo " $x";
    //         $x = $x + $k;
    //     } else if ($i % 2 == 0) {
    //         echo " $i*$i";
    //     }
    // }
    // if ($output == "add") {
    //     echo "add";
    //     $output = $obj1->Add();
    // } else if ($output == "sub") {
    //     echo "sub";
    //     $output = $obj1->Sub();
    // } else if ($output == "mul") {
    //     echo "mul";
    //     $output = $obj1->Mul();
    // } else if ($output == "div") {
    //     echo "div";
    //     $output = $obj1->Div();
    // }
    ?>

</head>

<body>

    <div style="width:500px;padding-top:10vh;margin:auto;font-size:1.5rem;">

        <h2 style="text-align: center;">Simple Calculator</h1>

            <form method="GET" class="form-style">
                <label for="input1" class="label-type-01">1st Variable</label>
                <input type="number" name="input1" class="input-type-02" value="<?php echo $a; ?>">
                <br><br>
                <!-- <label for="input2" class="label-type-01">2nd Variable</label> -->
                <!-- <input type="number" name="input2" class="input-type-02" value="<?php echo $b; ?>"> -->
                <!-- <br><br> -->
                <label for="output" class="label-type-01">Operation Output</label>
                <input type="number" name="output" class="input-type-02" value="<?php echo $output; ?>">
                <br><br>

                <div style="display:flex;justify-content:center;">
                    <input type="submit" value="process" name="output" class="input-type-01">
                    <!-- <input type="submit" value="sub" name="output" class="input-type-01">&nbsp;&nbsp; -->
                    <!-- <input type="submit" value="mul" name="output" class="input-type-01">&nbsp;&nbsp; -->
                    <!-- <input type="submit" value="div" name="output" class="input-type-01"> -->
                </div>

            </form>



    </div>

</body>

</html>