<!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
    <?php
    $input1 = $_GET["input1"];
    $input2 = $_GET["input2"];
    $output = $_GET["output"];
    $result = 0;

    if ($output == "add") {
        for ($i = $input1; $i <= $input2; $i++)
            if ($i % 2 == 0) {
                $result = $result + $i;
            }
    } else if ($output == "sub") {
        $cnt = 1;
        for ($i = $input1; $i <= $input2; $i++) {
            if ($i % 2 == 0) {
                if ($cnt) {
                    $result = $i;
                    $cnt--;
                } else {
                    $result = $result - $i;
                }
            }
        }
    }
    ?>
</head>

<body>
    <div style="width: 50vw;margin-top:10vh;border: 1px solid black;padding:4rem;">
        <form method="GET">
            <label for="input1">Input 1 : &nbsp;&nbsp;</label>
            <input type="number" name="input1" value="<?php echo $input1 ?>">
            <br>
            <br>
            <label for="input2">Input 2 : &nbsp;&nbsp;</label>
            <input type="number" name="input2" value="<?php echo $input2 ?>">
            <br>
            <br>
            <label for="output">Output : </label>
            <input type="number" name="output" value="<?php echo $result ?>">
            <br>
            <br>

            <input type="submit" name="output" value="add">
            <input type="submit" name="output" value="sub">
        </form>


    </div>



</body>

</html>