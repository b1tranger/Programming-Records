<!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
    <?php

    $input1 = $_GET['input1'];
    $count = $input1;
    $n = 1;
    $k = 2;
    $d = 3;
    ?>
</head>

<body>
    <div style="width: 50vw;border: 1px solid black;padding:4rem;margin:auto;margin-top:20vh;">
        <form method="GET">
            <label for="input1">Input : &nbsp;&nbsp;</label>
            <input type="number" name="input1" value="<?php echo $input1 ?>">
            <br>
            <br>
            <p>Output :</p>
            <div style="border: 1px solid black;width:180px;height: 20px;text-align:center;">
                <?php
                for ($i = 0; $i < $count; $i++) {
                    echo $n . " ";
                    $n = $n + $d;
                }
                ?>
            </div>
            <br>
            <br>
            <input type="submit">
        </form>
    </div>
</body>

</html>