
    <?php
$input1 = $_GET["input1"];
$input2 = $_GET["input2"];
$output = $_GET["output"];

if($output == "add")
{
    $output = $input1+$input2;
}

// echo $output;
else if($output == "sub")
{
    $output = $input1-$input2;
}
else if($output == "mul")
{
    $output = $input1*$input2;
}
else if($output == "div")
{
    $output = $input1/$input2;
}



?>

<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
    <style>
input{

font-size: 1.5rem;
/* text-align: center; */
}
body{
    color: white;
    background-color: #333;
}

.input-type-01{
    padding:.5rem;margin:10px;border-radius:15px;
    padding-left: 1rem;
    padding-right: 1rem;
}
.input-type-02{
    width: 90%;
    border-radius:50px;
    height: 50px;
    padding-left: 40px;
}

.label-type-01{
/* text-align: center; */
/* margin: auto; */
display: flex;
justify-content: center;
padding: 10px;
}

.input-type-01:hover{
    background-color: black;
    color: white;
    cursor: pointer;
}

.form-style{
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
    <input type="number" name="input1" class="input-type-02" value="<?php echo $input1;  ?>">
    <br><br>
    <label for="input2" class="label-type-01">2nd Variable</label>
    <input type="number" name="input2" class="input-type-02" value="<?php echo $input2;  ?>">
    <br><br>
    <label for="output" class="label-type-01">Operation Output</label>
    <input type="number" name="output" class="input-type-02" value="<?php echo $output;  ?>">
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