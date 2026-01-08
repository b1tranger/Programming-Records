<!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>

</head>

<body>

    <div style="width:500px; margin: auto;margin-top:20vh;">
        <form method="GET">
            <label for="input1">Input 1 </label>
            <input id="input1" type="text" name="input1"><br>
            <br>
            <label for="input2">Input 2 </label>
            <input id="input2" type="text" name="input2"><br>
            <br>
            <button type="submit">Check</button>
        </form>

        <hr>
        <h4>#Output:</h4>
        <?php
        $input1 = $_GET["input1"];
        $input2 = $_GET["input2"];

        echo "Input 1: $input1<br><br>Input 2: $input2";

        ?>
    </div>
</body>

</html>