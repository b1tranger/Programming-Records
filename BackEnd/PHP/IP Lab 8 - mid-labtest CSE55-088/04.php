<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
    <style>
.section{
background-color: #5a5959ff;margin: 20px auto; height: 100vh;
}

.form{
    background-color: white; border-radius: 15px;padding-left: 50px;padding-right: 50px;margin:auto;max-width: 40vw;padding:20px;
}
        </style>
        <?php
$a = $_GET["a"];
$b = $_GET["b"];
$c = $_GET["c"];
$d = $_GET["d"];

$e = $_GET["e"];
$f = $_GET["f"];
$g = $_GET["g"];
$h = $_GET["h"];

$i = $_GET["i"];
$j = $_GET["j"];
$k = $_GET["k"];
$l = $_GET["l"];

$op = $_GET["output"];

if($op == "addition"){
    $i = $a + $b;
    $j = $b + $f;
    $k = $c + $g;
    $l = $d + $h;
}
else if($op == "subtraction"){
    $i = $a - $b;
    $j = $b - $f;
    $k = $c - $g;
    $l = $d - $h;
}



?>
</head>
<body style="background-color: #333;">
<div class="section">
    <span style="margin:200px auto;">&nbsp;</span>
<div class="form">
    <form method="GET">
        <h3 align="center">Logic generator</h3>
<label>Input matA: </label>
<br><br>
<input type="text" name="a" value="<?php echo $a; ?>" style="width: 20px;">
<input type="text" name="b" value="<?php echo $b; ?>" style="width: 20px;">
<br><br>
<input type="text" name="c" value="<?php echo $c; ?>" style="width: 20px;">
<input type="text" name="d" value="<?php echo $d; ?>" style="width: 20px;">

<br><br>

<label for="input2">Input matB: </label><br><br>
<input type="text" name="e" value="<?php echo $e; ?>" style="width: 20px;">
<input type="text" name="f" value="<?php echo $f; ?>" style="width: 20px;">
<br><br>
<input type="text" name="g" value="<?php echo $g; ?>" style="width: 20px;">
<input type="text" name="h" value="<?php echo $h; ?>" style="width: 20px;">

<br><br>

<label for="output">Output: </label>
<br><br>
<input type="text" name="i" value="<?php echo $i; ?>" style="width: 20px;">
<input type="text" name="j" value="<?php echo $j; ?>" style="width: 20px;">
<br><br>
<input type="text" name="k" value="<?php echo $k; ?>" style="width: 20px;">
<input type="text" name="l" value="<?php echo $l; ?>" style="width: 20px;">

<br><br>
<div style="text-align: center;">
<input type="submit" name="output" value="addition">
<input type="submit" name="output" value="subtraction">
</div>
</form>
</div>
</div>
    
</body>
</html>