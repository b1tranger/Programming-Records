<?php
// include("connection.php");

if (isset($_POST['submit'])) {
    $string = trim($_POST['inputString']);
    // $author = trim($_POST['author']);
    $filter = $_POST['filter'];
    // echo $filter;
    $n = strlen($string);
    $temp = $string;
    echo $temp;
    $cntChar = 0;
    $cntNum = 0;
    $cntSpecial = 0;
    $i = 0;
    while ($n != 0) {

        // if (($ch >= 'A' && $ch <= 'Z') || ($ch >= 'a' && $ch <= 'z')) {
        //     $letters++;
        // } elseif ($ch >= '0' && $ch <= '9') {
        //     $numbers++;
        // }
        if ($temp[$i] == '1' || $temp[$i] == '2' || $temp[$i] == '3' || $temp[$i] == '4' || $temp[$i] == '5' || $temp[$i] == '6' || $temp[$i] == '7' || $temp[$i] == '8' || $temp[$i] == '9' || $temp[$i] == '10') {
            $cntNum++;
            $i++;
        } elseif ($temp[$i] == 'a' || $temp[$i] == 'b' || $temp[$i] == 'c' || $temp[$i] == 'd' || $temp[$i] == 'e' || $temp[$i] == 'f' || $temp[$i] == 'g' || $temp[$i] == 'h' || $temp[$i] == 'i' || $temp[$i] == 'j' || $temp[$i] == 'k' || $temp[$i] == 'l' || $temp[$i] == 'm' || $temp[$i] == 'n' || $temp[$i] == 'o' || $temp[$i] == 'p' || $temp[$i] == 'q' || $temp[$i] == 'r' || $temp[$i] == 's' || $temp[$i] == 't' || $temp[$i] == 'u' || $temp[$i] == 'v' || $temp[$i] == 'w' || $temp[$i] == 'x' || $temp[$i] == 'y' || $temp[$i] == 'z' || $temp[$i] == 'A' || $temp[$i] == 'B' || $temp[$i] == 'C' || $temp[$i] == 'D' || $temp[$i] == 'E' || $temp[$i] == 'F' || $temp[$i] == 'G' || $temp[$i] == 'H' || $temp[$i] == 'I' || $temp[$i] == 'J' || $temp[$i] == 'K' || $temp[$i] == 'L' || $temp[$i] == 'M' || $temp[$i] == 'N' || $temp[$i] == 'O' || $temp[$i] == 'P' || $temp[$i] == 'Q' || $temp[$i] == 'R' || $temp[$i] == 'S' || $temp[$i] == 'T' || $temp[$i] == 'U' || $temp[$i] == 'V' || $temp[$i] == 'W' || $temp[$i] == 'X' || $temp[$i] == 'Y' || $temp[$i] == 'Z') {
            $cntChar++;
            $i++;
        } else {
            $cntSpecial++;
            $i++;
        }
        $n--;
    }

    if ($filter == 'Number Checker') {
        $output = $cntNum;
    } elseif ($filter == 'Character Checker') {
        $output = $cntChar;
    }
}



?>


<!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>

<body>
    <div style="max-width: 60%;margin:auto;margin-top:100px;">
        <form method="POST">
            <label for="inputString">Input String: </label>
            <input type="text" name="inputString"><br><br>
            <select name="filter">
                <option value="">-/-</option>
                <option value="Number Checker">Number Checker</option>
                <option value="Character Checker">Character Checker</option>
            </select>
            <br><br>
            <input type="text" value="<?php echo $output; ?>"><br><br>

            <input type="submit" name="submit" value="submit">
        </form>
    </div>

</body>

</html>