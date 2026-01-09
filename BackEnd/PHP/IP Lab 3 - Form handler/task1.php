<!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>

<body>
    <div style="width:500px;margin:auto;margin-top:20vh;">
        <form method="GET">
            <label for="input1">Sequence digits: </label>
            <input id="input1" name="input1" type="text">
<br><br>
            <input type="submit">
        </form>

        <hr>

        <h4># Output:</h4>

        <?php
        echo "Received Sequence: ";
        $n = $_GET["input1"];
        $a = 0;
        $t = 1;
        for ($i = 1; $i <= $n; $i++) {

            $a = $a + $t;
            $t = $t + 2;
            echo "$a &nbsp;";

        }

        ?>

    </div>
</body>

</html>