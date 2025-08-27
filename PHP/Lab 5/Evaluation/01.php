<!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
    <?php
    function getFact($n)
    {
        $fact = 1;
        for ($i = 1; $i <= $n; $i++) {
            $fact = $fact * $i;
        }
        return $fact;
    }
    $input1 = $_GET["input1"];
    $output = $_GET["output"];
    $n = $input1;
    echo "######### code start #########<br>";
    echo "Input is $input1 <br>";
    $div = 10;
    $digits = 0;
    while ($n > 0) {
        $n = (int)($n / $div);
        $digits++;
    }
    echo "digits $digits <br>";
    $size = $digits;
    echo "######### storing digits #########<br>";
    echo "declared array of size $size<br>";
    $arr = array_fill(0, $size, 0);
    // Create an array of size 10, filled with 0
    $n = $input1;
    $div = 10;
    for ($i = 0; $i < $size; $i++) {
        $num = $n % $div;
        echo "finding factorial for $num <br>";
        //find the last digit
        $arr[$i] = getFact($num);
        echo "factorial = $arr[$i] <br>";
        $n = (int)($n / $div);        //deletes the last digit
        echo "left portion $n <br>";
    }
    $sum = 0;
    echo "######### finding sum #########<br>";
    for ($i = 0; $i < $size; $i++) {
        $sum = $sum + $arr[$i];
        echo "adding $arr[$i] <br>";
    }
    echo "sum = $sum<br>";
    if ($sum == $input1) {
        echo "<br><br>$sum = $input1\n";
        $output = "$input1 = Strong Number";
    } else {
        echo "<br><br>$sum != $input1\n";
        $output = "$input1 = NOT Strong Number";
    }
    // $output = $sum;
    // main();
    ?>
</head>


<body>
    <div style="width: 50vw;border: 1px solid black;padding:4rem;margin:auto;margin-top:20vh;">
        <form method="GET">
            <label for="input1">Input : &nbsp;&nbsp;</label>
            <input type="number" name="input1" value="<?php echo $input1 ?>">
            <br>
            <br>
            <label for="output">Output : </label>
            <input type="text" name="output" value="<?php echo $output ?>">
            <br>
            <br>
            <input type="submit" name="output">
        </form>


    </div>



</body>

</html>