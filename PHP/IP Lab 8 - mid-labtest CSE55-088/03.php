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
$input1 = $_GET["input1"];
// $b = $_GET["input2"];
$output = $_GET["output"];

$series = "";
$n = $input1;
$k = 0;

for($i = 1; $i <= $n; $i++){
    if($i%2==0){
$series = "$series" + "$k";
    $k = $k + 2;
    }
    else if($i%2!=0){
$series = "$series" + "$i";
    }
}

$output = $series;
?>
</head>
<body style="background-color: #333;">
<div class="section">
    <span style="margin:200px auto;">&nbsp;</span>
<div class="form">
    <form method="GET">
        <h3 align="center">Decimal Converter</h3>
<label for="input1">Input: </label>
<input type="number" name="input1" value="<?php echo $input1; ?>">
<br><br>
<label for="output">Output: </label>
<input type=text name="output" value="<?php 

echo $output

?>">
<br><br>
<div style="text-align: center;">
<input type="submit" name="output" value="decimal">
</div>
</form>
</div>
</div>
    
</body>
</html>