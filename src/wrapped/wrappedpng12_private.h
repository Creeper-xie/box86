#if !(defined(GO) && defined(GOM) && defined(GO2) && defined(DATA))
#error meh!
#endif

GO(png_convert_from_time_t, vFpu)
GO(png_check_sig, iFpi)
GO(png_create_info_struct, pFp)
GOM(png_create_read_struct, pFEpppp)
GOM(png_create_read_struct_2, pFEppppppp)
GO(png_create_write_struct, pFpppp)
GOM(png_create_write_struct_2, pFEppppppp)
GO(png_destroy_read_struct, vFppp)
GO(png_destroy_write_struct, vFpp)
GO(png_error, vFpp)
GO(png_free, vFpp)
GO(png_get_bit_depth, CFpp)
GO(png_get_channels, CFpp)
GO(png_get_cHRM, uFpppppppppp)
GO(png_get_color_type, CFpp)
GO(png_get_error_ptr, pFp)
GO(png_get_gAMA, uFppp)
GO(png_get_header_ver, pFp)
GO(png_get_iCCP, uFpppppp)
GO(png_get_IHDR, vFppppppppp)
GO(png_get_image_height, uFpp)
GO(png_get_image_width, uFpp)
GO(png_get_interlace_type, CFpp)
GO(png_get_io_ptr, pFp)
GO(png_get_libpng_ver, pFp)
GO(png_get_pHYs, uFppppp)
GO(png_get_PLTE, uFpppp)
GO(png_get_progressive_ptr, pFp)
GO(png_get_rowbytes, uFpp)
GO(png_get_sRGB, uFppp)
GO(png_get_text, uFpppp)
GO(png_get_tRNS, uFppppp)
GO(png_get_valid, uFppu)
GO(png_get_x_offset_pixels, iFpp)
GO(png_get_y_offset_pixels, iFpp)
GO(png_init_io, vFpp)
GO(png_malloc, pFpp)
GO(png_permit_mng_features, uFpu)
GO(png_process_data, vFpppL)
GO(png_progressive_combine_row, vFppp)
GO(png_read_end, vFpp)
GO(png_read_image, vFpp)
GO(png_read_info, vFpp)
GO(png_read_row, vFppp)
GO(png_read_update_info, vFpp)
GO(png_set_add_alpha, vFpui)
GO(png_set_bgr, vFp)
GO(png_set_bKGD, vFppp)
GO(png_set_cHRM, vFppdddddddd)
GO(png_set_compression_buffer_size, vFpu)
GO(png_set_compression_level, vFpi)
GO(png_set_compression_mem_level, vFpi)
GO(png_set_compression_strategy, vFpi)
GOM(png_set_error_fn, vFEpppp)
GO(png_set_expand, vFp)
GO(png_set_expand_gray_1_2_4_to_8, vFp)
GO(png_set_filter, vFpii)
GO(png_set_gAMA, vFppd)
GO(png_set_gamma, vFpdd)
GO(png_set_gray_to_rgb, vFp)
GO(png_set_gray_1_2_4_to_8, vFp)
GO(png_set_iCCP, vFpppipu)
GO(png_set_interlace_handling, iFp)
GO(png_set_keep_unknown_chunks, vFpipi)
GO(png_set_oFFs, vFppiii)
GO(png_set_packing, vFp)
GO(png_set_palette_to_rgb, vFp)
GO(png_set_pHYs, vFppuui)
GO(png_set_PLTE, vFpppi)
GOM(png_set_progressive_read_fn, vFEppppp)
GO(png_set_sBIT, vFppp)
GO(png_set_sig_bytes, vFpi)
GO(png_set_sRGB, vFppi)
GO(png_set_strip_16, vFp)
GO(png_set_swap, vFp)
GO(png_set_text, vFpppi)
GO(png_set_tIME, vFppp)
GO(png_set_tRNS, vFpppip)
GO(png_set_tRNS_to_alpha, vFp)
GO(png_set_IHDR, vFppuuiiiii)
GOM(png_set_read_fn, vFEppp)
GO(png_set_rows, vFppp)
GOM(png_set_write_fn, vFEpppp)
GO(png_sig_cmp, iFpuu)
GO(png_warning, vFpp)
GO(png_write_end, vFpp)
GO(png_write_chunk, vFpppu)
GO(png_write_image, vFpp)
GO(png_write_info, vFpp)
GO(png_write_png, vFppip)
GO(png_write_row, vFpp)
