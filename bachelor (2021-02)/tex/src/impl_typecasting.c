if (result < 0) {
        result -= (1 << (rescale_amount - 1));
        result = -((-result) >> (rescale_amount));
} else {
        result += (1 << (rescale_amount - 1));
        result = (result) >> (rescale_amount);
}

if (result < MIN) {
        output = MIN;
} else if (result > MAX) {
        output = MAX;
} else {
        output = result;
}
