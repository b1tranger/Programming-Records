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
            <label for="input1">First Name: </label>
            <input id="input1" name="input1" type="text">
            <br><br>
            <label for="input2">Phone Number: </label>
            <input id="input2" name="input2" type="text">
            <br><br>
            <select name="blood">
                <option>A+</option>
                <option>A-</option>
                <option>B+</option>
                <option>B-</option>
                <option>AB+</option>
                <option>AB-</option>
                <option>O+</option>
                <option>O-</option>

            </select>
            <br><br>
            <input type="submit">
        </form>

        <hr>

        <h4># Output:</h4>

        <?php

        $name = $_GET["input1"];
        $num = $_GET["input2"];
        $blood = $_GET["blood"];

        echo "First Name: $name<br><br>";
        echo "Mobile: $num<br><br>";
        echo "Blood Group: $blood<br><br>"

        ?>

    </div>
</body>

</html>